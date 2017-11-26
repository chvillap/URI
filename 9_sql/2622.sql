-- https://www.urionlinejudge.com.br/judge/en/problems/view/2622

select customers.name
from customers
    inner join legal_person
    on customers.id = legal_person.id_customers;
