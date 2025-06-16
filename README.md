# Skolakrizik-demo
> The following repository
> contains snippets of code used for demonstration purposes.

## Postup překladu
```c
int main() {
    int x = 2 + 3;
    return x;
}

Function: main
├── Declaration: int x
│   └── Expression: 2 + 3
└── Return: x

t1 = 2 + 3
x = t1
return x

x = 5
return x

return 5

//mov eax, 5     ; výsledek do registru
//ret            ; návrat z funkce

// CHYBY
int @x = 5;
int x = ;
int x = "text";
```


## SWI-Prolog

```pl 
% Rodiče
rodic(jan, pavel).
rodic(marie, pavel).
rodic(pavel, lucie).
rodic(pavel, ondrej).
rodic(lucie, alena).

% Pohlaví
muz(jan).
muz(pavel).
muz(ondrej).

zena(marie).
zena(lucie).
zena(alena).

otec(X, Y) :- rodic(X, Y), muz(X).
matka(X, Y) :- rodic(X, Y), zena(X).

sourozenec(X, Y) :- rodic(Z, X), rodic(Z, Y), X \= Y.

dite(X, Y) :- rodic(Y, X).

prarodic(X, Y) :- rodic(X, Z), rodic(Z, Y).

predci(X, Y) :- rodic(X, Y).
predci(X, Y) :- rodic(X, Z), predci(Z, Y).
```