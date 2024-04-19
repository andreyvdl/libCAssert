# libCAssert

> "Because you are too dumb to use assert." - Andrey 2024


Lets be real, you don't use assert in C because you are dumb enough to never thinking in using signal to cancel the sigabort, but ok, I will make a beautiful library for you to use.

## Dependencies

* C compiler (gcc, clang, cc, etc);
* A brain (optional);

## How to use

```sh
git clone https://github.com/andreyvdl/libCAssert
cd libCAssert
make
```

Now move the `libcassert.a` to any project you want to use it.
You can also combine it to another `.a` that you are using in your project by rename it or by:

```sh
ar -x libcassert.a
mv *.o /path/where/you/want
```
