-- https://www.urionlinejudge.com.br/judge/en/problems/view/2614

select customers.name, rentals.rentals_date
from customers
    inner join rentals
    on customers.id = rentals.id_customers
where date_part('month', rentals.rentals_date) = 9;
