# Room project

An attempt to check the feasibility of having requirements as code and using Doxygen for readability.

Code snippets taken from [here](https://www.programiz.com/cpp-programming/object-class).

## Install dependencies

```
sudo apt install cmake doxygen
```

## Build

```
mkdir build && cd build && cmake .. && make
```

## Run

```
./build/room
```

## Build docs

```
doxygen
```

## View docs

```
xdg-open ./docs/html/index.html
```
