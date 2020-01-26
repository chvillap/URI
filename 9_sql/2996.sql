-- https://www.urionlinejudge.com.br/judge/en/problems/view/2996

select packages.year, t1.sender, t2.receiver
from packages
inner join (
    select packages.id_package, users.name as sender
    from users
    inner join packages
        on users.id = packages.id_user_sender
    where users.address <> 'Taiwan'
) as t1
on packages.id_package = t1.id_package
inner join (
    select packages.id_package, users.name as receiver
    from users
    inner join packages
        on users.id = packages.id_user_receiver
    where users.address <> 'Taiwan'
) as t2
on packages.id_package = t2.id_package
order by year desc, packages.id_package desc;
