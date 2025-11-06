# dwm rice

This repository contains my riced dwm setup using Alacritty as the terminal and dwmblocks for the status bar.
All builds and configuration files are stored in a hidden folder called `~/.suckless`.

---

## Structure

The repository includes:

* `dwm` – customized build of dwm
* `dwmblocks` – modular status bar with shell scripts
* `alacritty.toml` – terminal configuration file with transparency, blur, and Catppuccin colors

Create the `.suckless` directory and move the dwm components into it:

```bash
mkdir -p ~/.suckless
mv dwm ~/.suckless/
mv dwmblocks ~/.suckless/
```

You can delete `st-flexipatch` if it exists, as Alacritty replaces it entirely.

---

## Installation

Build and install each component manually:

```bash
cd ~/.suckless/dwm
sudo make clean install

cd ~/.suckless/dwmblocks
sudo make clean install
```

Then install Alacritty and Picom:

```bash
sudo apt install alacritty picom
```

---

## Alacritty Setup

1. Copy the included configuration file:

   ```bash
   mkdir -p ~/.config/alacritty
   cp alacritty.toml ~/.config/alacritty/
   ```

2. Start Picom for transparency and blur:

   ```bash
   picom --backend glx -b
   ```

To start Picom automatically, add this line to your `~/.xinitrc` above `exec dwm`:

```bash
picom --backend glx -b &
```

---

## Configuration Notes

* `.xinitrc` launches dwm along with picom, dunst, and dwmblocks.
* `dwmblocks/scripts` contains modules for CPU, memory, temperature, disk, network, volume, and date.
* Fonts use JetBrainsMono Nerd Font for proper glyph rendering.

---

## Fonts

Install a Nerd Font to display icons correctly:

```bash
sudo apt install fonts-jetbrains-mono
```

Alternatively, download a Nerd Font manually from [nerdfonts.com](https://www.nerdfonts.com/).

---

## Notes

The `.suckless` directory is hidden to keep the home folder clean.
If you prefer a visible folder, use `~/suckless` instead and update your paths accordingly.
On laptops, you can add a battery module to `dwmblocks` for additional status information.

---

### Summary

* Alacritty replaces st-flexipatch
* Copy `alacritty.toml` to `~/.config/alacritty/`
* Start Picom for transparency and blur
* Build and install dwm and dwmblocks normally

---

### Screenshot

![dwm-rice-screenshot](https://github.com/user-attachments/assets/b8ff56d9-e63d-4260-9826-5a8b5bcd9d9a)
