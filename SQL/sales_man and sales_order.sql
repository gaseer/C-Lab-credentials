CREATE TABLE sales_man
(salesman_no int primary key,s_name varchar(20) not null,place text,phone int unique);

CREATE TABLE sales_order
(
order_no int primary key,order_date date not null,salesman_no int, 
foreign key(salesman_no) references sales_man(salesman_no) on delete cascade,
del_type char(1) check(del_type='P' or del_type='F'),order_status varchar(10) 
check(order_status='inprocess'or order_status='fullfilled'or order_status='backorder'or order_status='cancelled')
);

(a)
insert into sales_man values(1,'A','abc',98456);
insert into sales_man values(2,'B','abc',9845678);
insert into sales_man values(3,'C','abc',985678);
select * from sales_man;

insert into sales_order values(1,'01-01-2000',1,'P','inprocess');
insert into sales_order values(2,'02-01-2000',2,'F','cancelled');
insert into sales_order values(3,'06-01-2000',1,'F','fullfilled');
insert into sales_order values(4,'06-01-2000',3,'P','backorder');
select * from sales_order;

(b) ALTER TABLE sales_man DROP CONSTRAINT sales_man_pkey cascade;

(c) ALTER TABLE sales_man DROP CONSTRAINT sales_order_fkey
   ALTER TABLE sales_order DROP CONSTRAINT sales_order_del_type_check;

(d) ALTER TABLE sales_man add primary key(salesman_no);

(e) ALTER TABLE sales_order add constraint sales_order_del_type_check CHECK 
(del_type = 'P' OR del_type = 'F');
ALTER TABLE sales_order ADD CONSTRAINT FK_salesman_no FOREIGN KEY 
(salesman_no) REFERENCES sales_man(salesman_no);
