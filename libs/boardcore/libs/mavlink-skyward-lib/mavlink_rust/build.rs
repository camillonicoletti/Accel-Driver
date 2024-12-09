#![recursion_limit = "256"]

use std::env;

pub fn main() {
    let out_path = env::var("OUT_DIR").unwrap();

    let result = mavlink_bindgen::generate("../message_definitions", out_path)
        .expect("Failed to generate Rust MAVLink bindings");

    mavlink_bindgen::format_generated_code(&result);
    mavlink_bindgen::emit_cargo_build_messages(&result);
}
