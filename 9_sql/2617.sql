-- https://www.urionlinejudge.com.br/judge/en/problems/view/2617

select products.name, providers.name
from products
    inner join providers
    on products.id_providers = providers.id
where providers.name = 'Ajax SA';
