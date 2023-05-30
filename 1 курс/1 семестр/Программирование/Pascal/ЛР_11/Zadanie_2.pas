program l11;
var x, y:real;
begin
writeln('¬ведите x');
readln(x);
if x>=1 then
y:=1/2*x
else if x<0 then
y:=1/4*abs(x)
else y:=1/3*x;
writeln('y = ', y );
readln();
end.
