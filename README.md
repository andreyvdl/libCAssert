# libCAssert

Did you know that C has a macro function that checks a test for you? Well it doesn't work very well because if something wents wrong it will abort the program, so i decided to make this library.

## Dependencies

* C compiler (gcc, clang, cc, etc);
* 64 bits system (because all tests with int will be using int64_t)

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


