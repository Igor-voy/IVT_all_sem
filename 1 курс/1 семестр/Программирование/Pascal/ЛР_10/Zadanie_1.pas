program l9;
var  mas:array [1..10]of integer;
i,s:integer;
begin
writeln('������');
randomize;
for i:=1 to 10 do
begin
mas[i]:=random(100);
write(mas[i], ' ');
end;
writeln();
s:=0;
for i:=1 to 10 do
begin
if mas[i] mod 2 = 0 then
s:=s+mas[i]
end;
writeln('����� ����� ', s);
readln();
end.