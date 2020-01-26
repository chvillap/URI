-- https://www.urionlinejudge.com.br/judge/en/problems/view/2988

select teams.name,
       temp.matches,
       temp.victories,
       temp.defeats,
       temp.matches - temp.victories - temp.defeats as draws,
       temp.matches - temp.victories - temp.defeats + temp.victories * 3 as score
from teams
inner join (
    (
        select teams.id,
               count(teams.id) as matches
        from teams
        inner join matches
            on teams.id = matches.team_1 or teams.id = matches.team_2
        group by teams.id
    ) as t1
    inner join
    (
        select teams.id as id2,
               count(matches2.winner) as victories
        from teams
        left join (
            select case when team_1_goals > team_2_goals then team_1
                        when team_2_goals > team_1_goals then team_2
                        else 0
                   end as winner
            from matches
            ) as matches2
            on teams.id = matches2.winner
        group by teams.id
    ) as t2
    on t1.id = t2.id2
    inner join
    (
        select teams.id as id3,
               count(matches2.loser) as defeats
        from teams
        left join (
            select case when team_1_goals < team_2_goals then team_1
                        when team_2_goals < team_1_goals then team_2
                        else 0
                   end as loser
            from matches
            ) as matches2
            on teams.id = matches2.loser
        group by teams.id
    ) as t3
    on t1.id = t3.id3
) as temp
    on teams.id = temp.id
order by score desc, teams.name asc;
