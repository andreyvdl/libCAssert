# libCAssert

> "Because you are too dumb to use assert." - Andrey 2024

Did you know that C has a macro function that checks a test for you? Of course not! If you know it you could be using it instead of downloading other test libraries.

## Dependencies

* C compiler (gcc, clang, cc, etc);
* A brain (optional);

## Compile it

```sh
git clone https://github.com/andreyvdl/libCAssert
cd libCAssert
make
```

Now move the `libcassert.a` to any project you want to use it.
You can also combine it to another `.a` that you are using in your project by rename/copy it or by:

```sh
ar -x libcassert.a
mv *.o /path/where/you/want
```

## THE FUCKING MANUAL


