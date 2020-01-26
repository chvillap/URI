-- https://www.urionlinejudge.com.br/judge/en/problems/view/2993

select amount as most_frequent_value
from (
  select amount, count(amount) as count
  from value_table
  group by amount
  order by count desc
) as _
limit 1;
