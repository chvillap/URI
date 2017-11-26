-- https://www.urionlinejudge.com.br/judge/en/problems/view/2625

select regexp_replace(cpf, '(\d{3})(\d{3})(\d{3})(\d{2})','\1.\2.\3-\4')
from natural_person;
