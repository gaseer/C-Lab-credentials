CREATE TABLE hospital(doctor_id text,doctor_name varchar(10),department varchar(25),qualification varchar(25),experience text);

A)
insert into hospital values('D001','miya','cardiologist','mbbs',5);
insert into hospital values('D002','john','orthologist','md',4);
insert into hospital values('D003','ramesh','skin','mbbs',3);
insert into hospital values('D004','madona','dentist','bds',6);
insert into hospital values('D005','manoj','optometry','md',1);

B) select * from hospital;

C) select * from hospital where qualification='md';

D) select * from hospital where experience>'5' and qualification!='md';

E) select * from hospital where department='skin';

F) update hospital set experience=5 where doctor_id='D003';
   select * from hospital;
   
G) delete from hospital where doctor_id='D005';
