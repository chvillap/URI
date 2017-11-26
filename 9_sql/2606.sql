-- https://www.urionlinejudge.com.br/judge/en/problems/view/2606

select products.id, products.name
from products
    inner join categories
    on products.id_categories = categories.id
where categories.name like 'super%';
