program l9;
var n,a:integer;
begin
randomize;
n:=random(100);
writeln('Введите число от 1 до 100');
readln(a);
while a<>n do
begin
if a>n then
begin
writeln('Число должно быть меньше. Попробуйте еще раз.');
readln(a);
end;
if a<n then
begin
writeln('Число должно быть больше. Попробуйте еще раз.');
readln(a);
end;
end;
writeln('Поздравляю! Вы угадали число.');
readln;
end.