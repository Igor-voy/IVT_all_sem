program l8;
var x,e,S0,U0:real;
k:integer;
begin
k:=1;
U0:=1;
S0:=1;
x:=0.5;
e:=0.0001;
while abs(U0)>e do
begin
U0:=U0*x/k;
k:=k+1;
S0:=S0+U0;
end;
writeln ('S = ', S0:2:4);
readln();
end. 