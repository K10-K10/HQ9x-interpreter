# HQ9+-interpreter

## Char list

| char | command                                                                         |
| ---- | ------------------------------------------------------------------------------- |
| H    | print "Hello, world!"                                                           |
| Q    | print the program's source code (sometimes called a quine)                      |
| 9    | print the lyrics to 99 Bottles of Beer                                          |
| +    | add one to the accumulator (the value of the accumulator cannot be accessed)[2] |

[reference from wikipedia](https://simple.wikipedia.org/wiki/HQ9%2B)

### "99 Bottles of Beer" lyrics
```
99 bottles of beer on the wall, 99 bottles of beer.
Take one down and pass it around, 98 bottles of beer on the wall.

98 bottles of beer on the wall, 98 bottles of beer.
Take one down and pass it around, 97 bottles of beer on the wall.

...

2 bottles of beer on the wall, 2 bottles of beer.
Take one down and pass it around, 1 bottle of beer on the wall.

1 bottle of beer on the wall, 1 bottle of beer.
Take one down and pass it around, no more bottles of beer on the wall.

No more bottles of beer on the wall, no more bottles of beer.
Go to the store and buy some more, 99 bottles of beer on the wall.
```

## Install

1. Clone this repository.

- ssh

```bash
git clone git@github.com/K10-K10/HQ9x-interpreter
```

- https

```bash
git clone https://github.com/K10-K10/HQ9x-interpreter
```

2. Build

Build code

```bash
g++ main.cpp -o hq
```

3. Copy `hq` in `bin`

```bash
sudo cp bef ~/.local/bin/hq
```

4. Add path in ~/.zshrc

```bash
export PATH="$HOME/.local/bin:$PATH"
```

## Run

```bash
hq file.hq
```
