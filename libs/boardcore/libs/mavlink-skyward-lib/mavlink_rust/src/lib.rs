mod bindings {
    include!(concat!(env!("OUT_DIR"), "/mod.rs"));
}

pub use bindings::*;
pub use mavlink_core as mavlink;
