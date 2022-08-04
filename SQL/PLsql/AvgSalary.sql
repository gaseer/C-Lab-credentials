create table emp_sal(empno int,ename varchar(10),edept varchar(10),salary numeric);      
insert into emp_sal values(01,'raju', 'sales', 2000);
insert into emp_sal values(02,'Manju', 'sales', 4000);
insert into emp_sal values(03,'sanju', 'marketing', 2000);
select*from emp_sal;

create function avgsal(deptt varchar(10))returns numeric(10,2) as
'declare
avgsal numeric(10,2);
begin
avgsal=(select avg(salary) from emp_sal group by edept having edept= deptt);
return avgsal;
end;'language plpgsql;

select avgsal('sales');
