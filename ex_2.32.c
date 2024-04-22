int tsub_ok(int x, int y) { // for x + - y
  return tadd_ok(x, -y);    // |x| > |y| - no overflow
}                           // |x|(x >= 0) < |y| - no overflow
                            // |x|(x < 0) -x + -y < -Int(MAX) - owerflow
                            // x > 0 && y < 0 => tsub_ok(MAX_INT, -(-MAX_INT)) => overflow
