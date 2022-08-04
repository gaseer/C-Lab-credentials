create function primecheck(n integer) returns varchar(10) as
' declare
i integer;
flag integer:=0;
begin
for i in 2..n/2
loop
if mod(n,i)=0
then
flag:=1;
exit;
end if;
end loop;
if flag=0 
then
 return ''prime''; 
else
 return ''not prime'';
end if;
end;'
language plpgsql;
select primecheck(20);
