-- https://www.urionlinejudge.com.br/judge/en/problems/view/2994

select doctors.name,
       round(sum(t.earned), 1) as salary
from doctors
inner join (
    select attendances.id_doctor,
           attendances.id_work_shift,
           sum(attendances.hours) as total_hours,
           sum(attendances.hours) * 150.0 * (1.0 + work_shifts.bonus / 100.0) as earned
    from attendances
    inner join work_shifts
        on attendances.id_work_shift = work_shifts.id
    group by attendances.id_doctor, attendances.id_work_shift, work_shifts.bonus
) as t
on doctors.id = t.id_doctor
group by doctors.id
order by salary desc;
