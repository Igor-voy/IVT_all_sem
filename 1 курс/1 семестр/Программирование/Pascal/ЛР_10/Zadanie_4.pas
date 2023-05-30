program l10;
var  mas:array [1..10]of integer;
i,j,k,m:integer;
begin
writeln('Массив');
randomize;
for i:=1 to 10 do
begin
mas[i]:=random(100);
write(mas[i], ' ');
end;
writeln();
for i:=1 to 9 do
begin
m:=mas[i];
k:=i;
for j:=1+i to 10 do begin
if mas[j]>m then
begin
m:=mas[j];
k:=j;
end;
end;
mas[k]:=mas[i];
mas[i]:=m;
end;    
writeln('По убыванию');
for i:=1 to 10 do
write(mas[i],' ');
readln();
end.