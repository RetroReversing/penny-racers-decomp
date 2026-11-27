# PENNY RACERS (decompilation)

<!-- decompdecomp:details:start -->
- **Game:** PENNY RACERS
- **Platform:** n64
- **Compiler:** gcc-2.7.2-kmc
<!-- decompdecomp:details:end -->
<!-- decompdecomp:progress:start -->
- **Progress:** 1193 matching function(s), 48 best attempt(s)
- **Completion:** 1,193 / 1,210 functions (98.6%). 82 set aside, excluded from completion.
<!-- decompdecomp:progress:end -->
<!-- decompdecomp:visuals:start -->
![Decompilation completion and function map](progress/decompdecomp-progress.svg)

Green: matched. Gold: attempted. Grey: open. Red: set aside.
<!-- decompdecomp:visuals:end -->
<!-- decompdecomp:port:start -->
## Porting progress

A native build of the game (Windows, Linux, macOS) needs these steps. The game's own data is never in this repository: each person's port is built from their own copy.

| Step | Status | Detail |
| :-- | :-- | :-- |
| The game's code in C | ⬜ in progress | 1,193 of 1,292 functions in C |
| Compiles for a PC | ⬜ in progress | not checked yet |
| Links for a PC | ⬜ in progress | not checked yet |
| Assets extracted | ⬜ in progress | 24 resources mapped |

**Runtimes:** WebAssembly: ready to play; libultraship: needs the game's code in c, compiles for a pc, links for a pc; N64ModernRuntime: needs the game's code in c, compiles for a pc, links for a pc
<!-- decompdecomp:port:end -->

A matching decompilation of PENNY RACERS for the Nintendo 64, started with [decompdecomp](https://github.com/RetroReversing/decompdecomp).
654 of 1298 functions are C that compiles to exactly the original code; the rest are still assembly.
`build.py` rebuilds the game from this tree and checks it against your original, byte for byte.

Want to start your own decompilation? Follow [RetroReversing's AI-assisted N64 decompilation guide](https://www.retroreversing.com/ai-assisted-n64-decompilation).

## Build

1. Put your own copy of the game here as `baserom.z64` (it is in `.gitignore`; never commit it).
2. `python3 build.py` (it uses decompdecomp's period compiler and assembler, so decompdecomp must be installed).

## Layout

| Path | What it is |
| :-- | :-- |
| `src/<segment>/<function>.c` | Decompiled functions, one per file, each matching the original. |
| `asm/nonmatchings/` | Assembly of every function (the target for the decompiled ones). |
| `asm/data/`, `asm/*.s`, `assets/` | Data, start-up code and binary parts, still as assembly or binary. |
| `include/common.h` | Types, structs and prototypes worked out so far. |
| `game.ld` | Places every function and data block at its original address. |
| `build.json`, `build.py` | How each file is built, and the build. |
| `objdiff.json` | Per-function units for [objdiff](https://github.com/encounter/objdiff) (`python3 build.py targets` makes their targets). |

Keep going with any tool: write a function in C under `src/`, add it to `build.json` (see the existing entries),
run `build.py`. When it says *identical*, the function matches. This is the base for ports and mods: once
everything is C, the game can be rebuilt, changed and moved to other platforms.

The game's code and data belong to their rights holder: keep this tree to yourself unless you have the right to
share it.

## Notes
- `func_8002B454`: kept as assembly, no longer matches
- `n_alFxParamHdl`: kept as assembly, no longer matches
- `__setInstChanState`: kept as assembly, its C also defines other functions; split their bodies into separate source files
- `_decodeChunk`: kept as assembly, its C also defines other functions; split their bodies into separate source files
- `alFxParamHdl`: kept as assembly, no longer matches
- `__osClearPage`: kept as assembly, its C also defines other functions; split their bodies into separate source files
- `__osPfsSelectBank`: kept as assembly, its C also defines other functions; split their bodies into separate source files

## Open in decompdecomp

Open this repository with **New project → Open a saved project** and supply your own game copy. The `progress/` folder retains matches, drafts, names, notes, headers and compiler settings. Build files and sources live at the repository root; ROMs and extracted files are excluded by `.gitignore`.
