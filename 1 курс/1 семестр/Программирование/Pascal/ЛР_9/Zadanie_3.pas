program l9;
var n,a:integer;
begin
randomize;
n:=random(100);
writeln('������� ����� �� 1 �� 100');
readln(a);
while a<>n do
begin
if a>n then
begin
writeln('����� ������ ���� ������. ���������� ��� ���.');
readln(a);
end;
if a<n then
begin
writeln('����� ������ ���� ������. ���������� ��� ���.');
readln(a);
end;
end;
writeln('����������! �� ������� �����.');
readln;
end.