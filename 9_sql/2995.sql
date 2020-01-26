-- https://www.urionlinejudge.com.br/judge/en/problems/view/2995

select temperature, number_of_records
from (
    select distinct temperature, mark
    from records
    order by mark
) as t1
inner join (
    select mark, count(mark) as number_of_records
    from records
    group by mark
    order by mark
) as t2
on t1.mark = t2.mark;
