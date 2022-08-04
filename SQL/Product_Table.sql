create table product(Product_code int primary key, Product_Name varchar(20),Category varchar(20), Quantity int,Price numeric);

insert into product values(1,'colgate','paste',10,100);
insert into product values(2,'close up','paste',9,90);
insert into product values(3,'nirma','bath soap',10,600);
insert into product values(4,'nirma','washing powder',10,700);
insert into product values(5,'toy','car',1,200);
insert into product values(6,'toy','bike',3,300);
insert into product values(7,'lux','bath soap',1,20);
insert into product values(8,'lux','bath liquid',600,2000);
insert into product values(9,'nirma','bath liquid',300,1000);
select * from product;

A) select * from product order by product_name desc;

B) select product_code,product_name from product where price between 20 and 50;

C) select product_name,price from product where category in ('bath soap','paste','washing powder');

D) select * from product where quantity<100 or quantity>500;

E) select product_name from product where product_name like 't%';

F) select product_name from product where category !='paste';

G) insert into product values(10,'radhas','washing powder',600,2000);


