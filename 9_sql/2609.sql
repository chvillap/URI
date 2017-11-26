-- https://www.urionlinejudge.com.br/judge/en/problems/view/2609

select categories.name, sum(products.amount)
from categories
    inner join products
    on categories.id = products.id_categories
group by categories.name;
