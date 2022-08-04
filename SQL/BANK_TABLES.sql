create table bank_customer(accno int primary key,customer_name varchar(10),place varchar(25));

create table deposit(accno int,foreign key(accno)references bank_customer,deposit_no varchar(5),damount numeric);

create table loan(accno int,foreign key(accno)references bank_customer, loan_no varchar(5),lamount numeric);

a)
insert into bank_customer values(101,'ravi','clt');
insert into bank_customer values(102,'dasan','tvm');
insert into bank_customer values(103,'luthufi','mlprm');
insert into bank_customer values(104,'biju','knr');
insert into bank_customer values(105,'jose','klm');
insert into bank_customer values(106,'shibu','kch');
insert into bank_customer values(107,'shyam','tvm');
insert into bank_customer values(108,'mohan','knr');
select*from bank_customer;

insert into deposit values(101,15,400000);
insert into deposit values(102,13,75000);
insert into deposit values(105,12,55000);
insert into deposit values(108,16,750000);
select*from deposit;

insert into loan values(103,4,500000);
insert into loan values(104,2,200000);
insert into loan values(106,6,300000);
insert into loan values(108,8,600000);
select*from loan;

b) select b.accno,customer_name,place,damount from bank_customer b join deposit d on b.accno=d.accno 
where b.accno not in(select accno from loan);

c) select b.accno,customer_name,place,lamount from bank_customer b join loan l on 
b.accno=l.accno where b.accno not in(select accno from deposit);

d) select customer_name from bank_customer where accno in((select accno from 
loan)intersect(select accno from deposit));

e) select customer_name from bank_customer where accno not in((select accno from 
loan)union(select accno from deposit));
