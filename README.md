# Photon-SetWifi
Very short sketch to configure SSID to persistent storage

################
I needed a stand-alone sketch to write SSID credential information to the Photon's persistant wifi store.  You flash this sketch, allow it to boot, then can flash another sketch after it has run.
Particle devices can remember the most recent:
-    Photon: 5 SSIDs
-    Core: 7 SSIDs

Offical documentation here: https://docs.particle.io/reference/firmware/photon/#setcredentials-
