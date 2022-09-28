#include <benchmark/benchmark.h>
#include <chrono>
#include <random>
#include <thread>

static void SimpleTest1(benchmark::State &state) {
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> sleep_time(1, 600);
  for (auto _ : state)
    std::this_thread::sleep_for(std::chrono::milliseconds(sleep_time(rng)));
}
// Register the function as a benchmark
BENCHMARK(SimpleTest1);

// Define another benchmark
static void SimpleTest2(benchmark::State &state) {
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> sleep_time(1, 600);
  for (auto _ : state)
    std::this_thread::sleep_for(std::chrono::milliseconds(sleep_time(rng)));
}
BENCHMARK(SimpleTest2);

BENCHMARK_MAIN();