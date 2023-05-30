program l8;
var R, C, t, Uvx, Uvix, e: real; 
begin
R:=2;
e:=0.001;
C:=0.01;
Uvx:=50;
t:=0.01;
while abs(Uvix-Uvx)>e do
begin
Uvix:=Uvx*(1-exp(-t/(R*C)));
writeln(' t = ', t:2:2, ' Uвых = ', Uvix:2:3);
t:=t+0.01;
end;
readln();
end.