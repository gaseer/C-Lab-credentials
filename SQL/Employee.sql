create table emp(emp_id int,e_name char(10),salary int,department char(10),age int);

insert into emp values(001,'ram',360000,'hr',22);
insert into emp values(002,'sanju',27000,'purchase',24);
insert into emp values(003,'sanoop',33600,'sales',37);
insert into emp values(004,'sachin',30000,'shipping',25);
insert into emp values(005,'reesh',25000,'sales',48);
select*from emp;

a) select count(emp_id) from emp;

b) select e_name,age from emp where age=(select max(age)from emp);

c) select avg(age)from emp group by department;

d) select department,avg(salary)from emp group by department;

e) select min(salary) from emp;

f) select count(e_name)from emp where department='purchase';

g) select max(salary) from emp where department='sales';

h) select max(salary)-min(salary) difference from emp;
