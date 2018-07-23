-- https://www.urionlinejudge.com.br/judge/en/problems/view/2741

select 'Approved: ' || name, grade
from students
where grade >= 7
order by grade desc;
