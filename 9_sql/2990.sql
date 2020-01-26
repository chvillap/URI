-- https://www.urionlinejudge.com.br/judge/en/problems/view/2990

select empregados.cpf,
       empregados.enome as enome,
       departamentos.dnome as dnome
from empregados
left join trabalha
    on empregados.cpf = trabalha.cpf_emp
inner join departamentos
    on departamentos.dnumero = empregados.dnumero
where pnumero is NULL
order by empregados.cpf;
