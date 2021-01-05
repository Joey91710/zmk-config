# ZMK Notes

## Docker Volume

Need to have the `zmk-config` directory mounted at `/workspaces/zmk-config` in Docker container

## Building

``` sh

west build --board nice_nano -d build/m60 -- -DSHIELD=m60 -DZMK_CONFIG=/workspaces/zmk-config/zmk-config/config

west build --board nice_nano -d build/tidbit -- -DSHIELD=tidbit -DZMK_CONFIG=/workspaces/zmk-config/zmk-config/config

west build --board nice_nano -d build/pockettype/default -- -DSHIELD=pockettype -DZMK_CONFIG=/workspaces/zmk-config/zmk-config/config

west build --board nrf52840_mdk_dongle -d build/pockettype/central -- -DSHIELD=pockettype_central -DZMK_CONFIG=/workspaces/zmk-config/zmk-config/config

west build --board nice_nano -d build/pockettype/peripheral -- -DSHIELD=pockettype_peripheral -DZMK_CONFIG=/workspaces/zmk-config/zmk-config/config

west build --board nice_nano -d build/tg4x -- -DSHIELD=tg4x -DZMK_CONFIG=/workspaces/zmk-config/zmk-config/config

west build --board nice_nano -d build/lily58/left -- -DSHIELD=lily58_left -DZMK_CONFIG=/workspaces/zmk-config/zmk-config/config

west build --board nice_nano -d build/lily58/right -- -DSHIELD=lily58_right -DZMK_CONFIG=/workspaces/zmk-config/zmk-config/config

west build --board nrf52840_mdk_dongle -d build/mdk_dongle -- -DSHIELD=mdk_dongle -DZMK_CONFIG=/workspaces/zmk-config/zmk-config/config

west build --board itsybitsy_nrf52840 -d build/azarashi64/left -- -DSHIELD=azarashi64_left -DZMK_CONFIG=/workspaces/zmk-config/zmk-config/config

west build --board itsybitsy_nrf52840 -d build/azarashi64/right -- -DSHIELD=azarashi64_right -DZMK_CONFIG=/workspaces/zmk-config/zmk-config/config

```