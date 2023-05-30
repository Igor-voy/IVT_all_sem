program l12;
var a: array [1..3, 1..3] of integer;
x: array [1..3] of integer;
i, j, k, p, t: integer;
begin
randomize;
writeln('Массив');
for i:=1 to 3 do
begin
x[i]:=0;
for j:=1 to 3 do
begin
a[i,j]:=random(100);
write(a[i,j], ' ');
x[i]:=x[i]+a[i,j]
end;
writeln();
end;
writeln();
for i:=1 to 3 do
begin
p:=i;
for j:=i+1 to 3 do 
if x[p]>x[j] then p:=j;
if p<>i
then 
begin
t:=x[i];
x[i]:=x[p];
x[p]:=t;
for j:=1 to 3 do
begin
t:=a[i,j];
a[i,j]:=a[p,j];
a[p,j]:=t;
end
end;
end;
writeln('Измененный массив ','    Сумма ');
for i:=1 to 3 do
begin
for j:=1 to 3 do write(a[i,j], ' ');
writeln('      |      ', x[i])
end;
readln();
end.