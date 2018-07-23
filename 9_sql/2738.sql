-- https://www.urionlinejudge.com.br/judge/en/problems/view/2738

select name, round(((math * 2) + (specific * 3) + (project_plan * 5)) / 10.0, 2) as avg
from candidate
inner join score
on candidate.id = score.candidate_id
order by avg desc;
