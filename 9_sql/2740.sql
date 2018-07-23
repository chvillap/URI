-- https://www.urionlinejudge.com.br/judge/en/problems/view/2740

(select 'Podium: ' || team as name
from league
order by position
limit 3)
union all
(select 'Demoted: ' || team as name
from league
where position >= (select max(position) - 1 from league))
