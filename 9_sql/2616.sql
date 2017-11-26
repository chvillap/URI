-- https://www.urionlinejudge.com.br/judge/en/problems/view/2616

select customers.id, customers.name
from customers
    left outer join locations
    on customers.id = locations.id_customers
where locations.id_customers is null;
