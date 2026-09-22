# Wiring Documentation

A final verified schematic is not included yet.

The academic report contains a conceptual L298N wiring diagram, but the circuit should be checked against the physical prototype before that diagram is treated as authoritative. The separately supplied concept illustration is intentionally excluded because it labels an A4988 driver while the implemented prototype and source documents identify an L298N driver.

## Documented Connections

| Connection | Arduino pin |
|---|---|
| Potentiometer wiper | `A0` |
| L298N `IN1` | `D1` |
| L298N `IN2` | `D2` |
| L298N `IN3` | `D3` |
| L298N `IN4` | `D4` |

Before publishing a schematic, verify motor coil pairs, driver power input, logic supply, enable jumpers, and the common-ground connection on the physical build.
