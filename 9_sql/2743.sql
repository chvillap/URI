-- https://www.urionlinejudge.com.br/judge/en/problems/view/2743

select name, length(name) as length
from people
order by length desc;
