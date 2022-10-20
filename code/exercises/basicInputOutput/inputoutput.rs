/*
  A simple Rust program to demonstrate
  file input/output & user input/output.
*/

use std::env;
use std::io;
use std::io::Read;
use std::io::Write;

fn main() {
    println!("Type your name and hit Enter:");
    let mut ur_name = String::new();

    io::stdin()
        .read_line(&mut ur_name)
        .ok()
        .expect("Couldn't read user input!");

    let mut file1 = std::fs::File::create("textfile.txt").expect("Failed to create the file!");

    file1
        .write_all(ur_name.as_bytes())
        .expect("Failed to write to the file!");

    println!("Written data to file.");

    let mut file2 = std::fs::File::open("textfile.txt").unwrap();
    let mut file_contents = String::new();
    file2.read_to_string(&mut file_contents).unwrap();
    print!(
        "Read & went through the file contents. Found:\n{}",
        file_contents
    );

    print!("\n");

    let path = env::current_dir().unwrap();
    println!("$PWD: {}", path.display());
}
