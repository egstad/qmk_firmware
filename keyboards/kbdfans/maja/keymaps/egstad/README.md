# Egstad

> A PC and Mac friendly keymap for Vulcan & KBDFans ergonimic mechanical keyboard

## Mac / PC Mode
With the help of [BootMagic Keycode](https://docs.qmk.fm/#/feature_bootmagic?id=keycodes), `CG_TOGG`, we can swap the Command and Control Keys. At the time of this writing, that key can be activated by pressing Space and LGUI together. 

## Auto-Shifting
Tap a key and you get its character. Tap a key, but hold it slightly longer and you get its shifted state. Voilà! No shift key needed! To toggle this on/off, press and hold Space and Shift together.


## Keeping up to date
To update your fork’s master branch, run the following, hitting the Enter key after each line:

```bash
git checkout master
git fetch upstream
git pull upstream master
git push origin master
```

Running into an issue? (This page is handy!)[https://docs.qmk.fm/#/newbs_git_using_your_master_branch]