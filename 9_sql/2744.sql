-- https://www.urionlinejudge.com.br/judge/en/problems/view/2744

select id, password, md5(password) as MD5
from account;
