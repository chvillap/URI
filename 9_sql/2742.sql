-- https://www.urionlinejudge.com.br/judge/en/problems/view/2742

select lr.name, round(lr.omega * 1.618, 3) as "The N Factor"
from life_registry as lr
join dimensions as d
on lr.dimensions_id = d.id
where lr.name like 'Richard %' and d.name in ('C774', 'C875')
order by lr.omega;
