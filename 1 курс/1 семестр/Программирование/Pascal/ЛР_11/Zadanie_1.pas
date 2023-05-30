program l11;
var x:array [1..5] of integer;
i,a,k,z,d1,d2,d3, n:integer;
y:real;
begin
writeln('Массив');
randomize;
for i:=1 to 5 do
begin
x[i]:=random(100);
write(x[i],' ');
end;
writeln ();
write('d1:  '); 
readln(d1);
write('d2: '); 
readln(d2);
write('d3:  '); 
readln(d3);
write('a: '); 
readln(a);
write('k: '); 
readln(k);
n:=1;
for i:=2 to 5 do
n:= n*i;
for i:=1 to 5 do
begin
if (x[i]>=d1) and (x[i]<d2) then
begin
y:=power(a+x[i],1/k);
writeln(' x[',i,'] = ', x[i], ' y = ',y);
end;
if (x[i]>d2) and (x[i]<=d3)  then
begin
y:=0;
z:=0;
while z<=10 do
begin
y:=y+(power(z,x[i])+x[i])/n;
z:=z+2;
writeln(' x[',i,'] = ',x[i], ' y = ',y);
end;
end;
end;
readln();
end.  
