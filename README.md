# Room project

An attempt to check the feasibility of having requirements as code and use Doxygen for readability.
See resulting documentation in the repository's [Github Pages](https://diasdm.github.io/doxygen-reqs-as-code/).

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

# Acknowledgments

Code snippets taken from [here](https://www.programiz.com/cpp-programming/object-class).

Doxygen configurations taken from [here](https://stackoverflow.com/questions/537043/custom-tags-with-doxygen).
