create table area(r int, area float(3));

do 
'declare
r int;
area float;
pi float :=3.14;
begin
r:=3;
while r<=7
loop 
area=pi*r*r;
insert into area values(r,area);
r:=r+1;
end loop;
end';

select *from area;

