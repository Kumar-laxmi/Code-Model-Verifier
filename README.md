# Code-Model-Verifier

<p align="center"><img src="https://user-images.githubusercontent.com/41234408/101987297-4473fb00-3cb9-11eb-9675-289ada4eef7e.gif" alt="Animated footer bars" width="100%"/></a></p> 

## 1) ANSI Frama C

<img src="https://github.com/Kumar-laxmi/Code-Model-Verifier/blob/main/Images/framac1.png" />

[Frama-C](http://frama-c.com) is a platform dedicated to the analysis of
source code written in C.

## Note: The Official Frama-C Repository is now at [Gitlab!](https://git.frama-c.com/pub/frama-c)

**Frama-C has moved its official repository to our self-hosted Gitlab instance.**

**Official releases (starting from Frama-C 21) will no longer be updated here.**

**Nightly snapshots are also available in our Gitlab! You can now get access to
the latest development version at: https://git.frama-c.com/pub/frama-c/-/tree/master**

**The official Frama-C issue tracker is now at our Gitlab:
https://git.frama-c.com/pub/frama-c/-/issues**

**You can submit issues and pull requests using your Github login
(choose "Sign in with Github" when prompted).**

**See you there!**

## A Collaborative Platform

Frama-C gathers several analysis techniques in a single collaborative
platform, consisting of a **kernel** providing a core set of features
(e.g., a normalized AST for C programs) plus a set of analyzers,
called **plug-ins**. Plug-ins can build upon results computed by other
plug-ins in the platform.

Thanks to this approach, Frama-C provides sophisticated tools, including:

- an analyzer based on abstract interpretation, aimed at verifying
  the absence of run-time errors (**Eva**);
- a program proof framework based on weakest precondition calculus (**WP**);
- a program slicer (**Slicing**);
- a tool for verification of temporal (LTL) properties (**Aoraï**);
- a runtime verification tool (**E-ACSL**);
- several tools for code base exploration and dependency analysis
  (**From**, **Impact**, **Metrics**, **Occurrence**, **Scope**, etc.).

These plug-ins share a common language and can exchange information via
**[ACSL](http://frama-c.com/acsl.html)** (*ANSI/ISO C Specification Language*)
properties. Plug-ins can also collaborate via their APIs.

## Installation

For more detailed information about installing OPAM/Frama-C,
see [INSTALL.md](INSTALL.md).

Frama-C is available through [OPAM](http://opam.ocaml.org/), the
OCaml Package Manager. This is the preferred installation method. Be sure
to install opam v2.0 or higher. Then the following sequence of commands
should install frama-c and its gui:

    opam init
    opam install depext
    opam depext frama-c
    opam install frama-c

Frama-C is developed mainly in Linux, often tested in macOS
(via Homebrew), and occasionally tested on Windows
(via the Windows Subsystem for Linux).

## Usage

Frama-C can be run from the command-line, or via its graphical interface.

#### Simple usage

The recommended usage for simple files is one of the following lines:

    frama-c file.c -<plugin> [options]
    frama-c-gui file.c

Where `-<plugin>` is one of the several Frama-C plug-ins,
e.g. `-eva`, or `-wp`, or `-metrics`, etc.
Plug-ins can also be run directly from the GUI.

To list all plug-ins, run:

    frama-c -plugins

Each plug-in has a help command
(`-<plugin>-help` or `-<plugin>-h`) that describes its several
options.

Finally, the list of options governing the behavior of Frama-C's kernel itself
is available through

    frama-c -kernel-help

#### Complex scenarios

For more complex usage scenarios (lots of files and directories,
with several preprocessing directives), we recommend splitting Frama-C's usage
in two parts:

1. Parsing the input files and saving the result to a file;
2. Loading the parsing results and then running the analyses or the GUI.

Parsing typically involves giving extra arguments to the C preprocessor,
so the `-cpp-extra-args` option is often useful, as in the example below:

    frama-c *.c *.h -cpp-extra-args="-D<define> -I<include>" -save parsed.sav

The results are then loaded into Frama-C for further analyses or for inspection
via the GUI:

    frama-c -load parsed.sav -<plugin> [options]
    frama-c-gui -load parsed.sav -<plugin> [options]

## Further reference

- Links to user and developer manuals, Frama-C archives,
  and plug-in manuals are available at <br> http://frama-c.com/download.html

- [StackOverflow](http://stackoverflow.com/questions/tagged/frama-c) has several
  questions with the `frama-c` tag, which is monitored by several members of the
  Frama-C community.

- The [Frama-c-discuss mailing list](http://lists.gforge.inria.fr/cgi-bin/mailman/listinfo/frama-c-discuss)
  is used for announcements and general discussions.

- The [official bug tracking system](http://bts.frama-c.com/) can be used for
  bug reports.

- The [Frama-C wiki](https://bts.frama-c.com/dokuwiki/doku.php?id=mantis:frama-c:start)
  has some useful information, although it is not entirely up-to-date.

- The [Frama-C blog](http://blog.frama-c.com/) has several posts about
  new developments of Frama-C, as well as general discussions about the C
  language, undefined behavior, floating-point computations, etc.

- The [Github snapshot repository](https://github.com/Frama-C/Frama-C-snapshot)
  contains the .tar.gz archives of stable Frama-C releases, ready to be cloned.
  It can also be used for reporting issues and submitting pull requests.

## -------------------------------------------------------------------------------------
## 2) Spin Model Checker
#### An Efficient Logic Model Checker for the Verification of Multi-threaded Code

Spin is an open-source software verification tool that was originally
developed (starting in 1980) in the Computing Science Research Center of Bell Labs
(the Unix group). It is often considered the most widely used formal verification tool.

Compilation and installation is trivial (see the makefile) and the only dependencies
are the use of a C compiler, yacc or byacc, and a small number of standard
unix/linux/cygwin-like tools (like make, mv, and rm). With help of a related tool
[Modex](http://spinroot.com/modex) Spin can verify C code directly, but the most
common use of the tool is to write a formal specification of the essence of an
application to be verified in a C-like meta-language called ProMeLa (Process Meta
Language). Annual Symposia and Workshops on the tool have been held since 1995.

The main site for access to manuals, tutorials, and papers explaining the theory
behind the tool is [http://spinroot.com](http://spinroot.com).

This repository contains the most recent version of the sources. Updates that are more
recent than the version.h files were made after the most recent release. When a new
release is issued, the version.h file is also updated.

The tool supports a range of different verification algorithms, including depth-first,
breadth-first, parallel/multi-core, bounded depth, bitstate search (using Bloom filter
theory), partial order reduced, and swarm search (using arbitrarily many cpus).
