# dwm rice

This repository contains my riced setup for dwm, st-flexipatch, and dwmblocks.  
I keep all my suckless builds inside a hidden folder called `.suckless` in my home directory.

## Structure

The repo is split into three folders:

- `dwm` – my customized build of dwm  
- `st-flexipatch` – my patched st terminal  
- `dwmblocks` – my status bar with custom scripts  

You will need to create a `.suckless` directory in your home folder and move these three folders into it:

```sh
mkdir -p ~/.suckless
mv dwm ~/.suckless/
mv st-flexipatch ~/.suckless/
mv dwmblocks ~/.suckless/
````

## Installation

Each program must be built and installed manually:

```sh
cd ~/.suckless/dwm
sudo make clean install

cd ~/.suckless/st-flexipatch
sudo make clean install

cd ~/.suckless/dwmblocks
sudo make clean install
```

## Configuration

* `.xinitrc` launches dwm along with picom, dunst, dwmblocks, and other background services.
* `dwmblocks/scripts` contains shell scripts for CPU, memory, temperature, disk, network, volume, and date information.
* All fonts are configured to use a Nerd Font so glyph icons render correctly in the bar and terminal.

## Notes

* I named the folder `.suckless` instead of `suckless` to keep it hidden in my home directory. This is just a preference and does not affect functionality.
* If you prefer a visible folder, simply use `~/suckless/` instead and update your paths.
* After cloning, you can also adjust the repo structure directly on GitHub if you decide to reorganize.
* If you are installing this on a laptop you should add a battery gauge to the status bar.

## Fonts

This setup requires a Nerd Font to display the icons in dwmblocks and st.
I recommend [JetBrainsMono Nerd Font](https://www.nerdfonts.com/font-downloads) at size 12, but any Nerd Font should work.

Example installation on Debian:

```sh
sudo apt install fonts-jetbrains-mono
```

## Preview
<img width="1920" height="1080" alt="rice" src="https://github.com/user-attachments/assets/f6bcd7ef-6d23-4432-8385-b09daa7456af" />
